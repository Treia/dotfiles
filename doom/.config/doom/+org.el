;;; +org.el -*- lexical-binding: t; -*-

(def-package! ob-http
  :after org)

(def-package! org-pomodoro
  :after org
  :config
  (setq org-pomodoro-finished-sound +org-gong-sound
        org-pomodoro-short-break-sound +org-bell-sound
        org-pomodoro-long-break-sound +org-bell-sound)
  ; Alert is used by org-pomodoro to send notifitications
  ; This makes it so that it uses send-notify instead of the message buffer
  (setq alert-default-style 'libnotify))

(def-package! ox-jekyll
  :after org
  :config
  (setq org-jekyll-use-src-plugin t
        ojs-blog-base-url "http://planelles.dev"
        ojs-blog-dir (expand-file-name "~/code/blog")))

(after! org
  (setq org-bullets-bullet-list '("#")
        org-ellipsis " ▼ "
        org-refile-target-verify-function '+org/custom-verify-target)

  (setq org-capture-templates
        '(("t" "Personal todo" entry
           (file+headline +org-capture-todo-file "Inbox")
           "* [ ] %?\n%i\n%a" :prepend t :kill-buffer t)
          ("n" "Personal notes" entry
           (file+headline +org-capture-notes-file "Inbox")
           "* %u %?\n%i\n%a" :prepend t :kill-buffer t)

          ;; Will use {project-root}/{todo,notes,changelog}.org, unless a
          ;; {todo,notes,changelog}.org file is found in a parent directory.
          ("p" "Templates for projects")
          ("pt" "Project todo" entry  ; {project-root}/todo.org
           (file+headline +org-capture-project-todo-file "Inbox")
           "* TODO %?\n%i\n%a" :prepend t :kill-buffer t)
          ("pn" "Project notes" entry  ; {project-root}/notes.org
           (file+headline +org-capture-project-notes-file "Inbox")
           "* TODO %?\n%i\n%a" :prepend t :kill-buffer t)
          ("pc" "Project changelog" entry  ; {project-root}/changelog.org
           (file+headline +org-capture-project-notes-file "Unreleased")
           "* TODO %?\n%i\n%a" :prepend t :kill-buffer t)

          ("b" "Bookmark" entry
           (file+headline +org-capture-bookmark-file "To read/Classify")
           "* [[%x][%?]] %^g" :kill-buffer t)))

  (set-popup-rule! "^\\Org Agenda"
    :size 15
    :quit t
    :select t
    :parameters
    '((transient)))

  (add-hook 'org-clock-in-hook #'save-buffer)
  (add-hook 'org-clock-out-hook #'save-buffer)

  (map! :map org-mode-map
        :localleader
        "p" #'org-pomodoro
        (:prefix ("c" . "clock")
          "r" #'org-clock-report)))

(map! :leader
      (:prefix "n"
        :desc "Org Agenda" :nvm "a" #'org-agenda-list
        :desc "Org Todo" :nvm "o" #'+org/open-todo-file
        :desc "Bookmarks" :nvm "b" #'+org/open-bookmarks)
      (:when (featurep! :completion helm)
        "X" #'helm-org-capture-templates))

;;; +org.el ends here
