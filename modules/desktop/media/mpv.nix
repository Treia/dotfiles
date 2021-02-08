{ options, config, lib, pkgs, ... }:

with lib;
with lib.my;
let cfg = config.modules.desktop.media.mpv;
in {
  options.modules.desktop.media.mpv = { enable = mkBoolOpt false; };

  config = mkIf cfg.enable {
    user.packages = with pkgs; [
      mpv-with-scripts
      mpvc
      (mkIf config.services.xserver.enable celluloid)
    ];
  };
}
