#pragma once

#include "lvgl.h"

// autogenerated, do not modify!

class Theme {
  protected:
    const lv_img_dsc_t *ui_img_initscreen2;
    const lv_img_dsc_t *ui_img_miningscreen2;
    const lv_img_dsc_t *ui_img_portalscreen;
    const lv_img_dsc_t *ui_img_btcscreen;
    const lv_img_dsc_t *ui_img_settingsscreen;
    const lv_img_dsc_t *ui_img_splashscreen2;

  public:
    // Getters
    const lv_img_dsc_t *getInitscreen2() const {
        return ui_img_initscreen2;
    }
    const lv_img_dsc_t *getMiningscreen2() const {
        return ui_img_miningscreen2;
    }
    const lv_img_dsc_t *getPortalscreen() const {
        return ui_img_portalscreen;
    }
    const lv_img_dsc_t *getBtcscreen() const {
        return ui_img_btcscreen;
    }
    const lv_img_dsc_t *getSettingsscreen() const {
        return ui_img_settingsscreen;
    }
    const lv_img_dsc_t *getSplashscreen2() const {
        return ui_img_splashscreen2;
    }

    // Setters
    void setInitscreen2(const lv_img_dsc_t *img) {
        ui_img_initscreen2 = img;
    }
    void setMiningscreen2(const lv_img_dsc_t *img) {
        ui_img_miningscreen2 = img;
    }
    void setPortalscreen(const lv_img_dsc_t *img) {
        ui_img_portalscreen = img;
    }
    void setBtcscreen(const lv_img_dsc_t *img) {
        ui_img_btcscreen = img;
    }
    void setSettingsscreen(const lv_img_dsc_t *img) {
        ui_img_settingsscreen = img;
    }
    void setSplashscreen2(const lv_img_dsc_t *img) {
        ui_img_splashscreen2 = img;
    }
};

// image files for theme NerdQaxePlus
LV_IMG_DECLARE(ui_img_NerdQaxePlus_initscreen2_png);
LV_IMG_DECLARE(ui_img_NerdQaxePlus_miningscreen2_png);
LV_IMG_DECLARE(ui_img_NerdQaxePlus_portalscreen_png);
LV_IMG_DECLARE(ui_img_NerdQaxePlus_btcscreen_png);
LV_IMG_DECLARE(ui_img_NerdQaxePlus_settingsscreen_png);
LV_IMG_DECLARE(ui_img_NerdQaxePlus_splashscreen2_png);

// image files for theme NerdOctaxePlus
LV_IMG_DECLARE(ui_img_NerdOctaxePlus_initscreen2_png);
LV_IMG_DECLARE(ui_img_NerdOctaxePlus_miningscreen2_png);
LV_IMG_DECLARE(ui_img_NerdOctaxePlus_portalscreen_png);
LV_IMG_DECLARE(ui_img_NerdOctaxePlus_btcscreen_png);
LV_IMG_DECLARE(ui_img_NerdOctaxePlus_settingsscreen_png);
LV_IMG_DECLARE(ui_img_NerdOctaxePlus_splashscreen2_png);


// class  for theme NerdQaxePlus
class ThemeNerdqaxeplus : public Theme {
public:
    ThemeNerdqaxeplus() {
        setInitscreen2(&ui_img_NerdQaxePlus_initscreen2_png);
        setMiningscreen2(&ui_img_NerdQaxePlus_miningscreen2_png);
        setPortalscreen(&ui_img_NerdQaxePlus_portalscreen_png);
        setBtcscreen(&ui_img_NerdQaxePlus_btcscreen_png);
        setSettingsscreen(&ui_img_NerdQaxePlus_settingsscreen_png);
        setSplashscreen2(&ui_img_NerdQaxePlus_splashscreen2_png);
    }
};

// class  for theme NerdOctaxePlus
class ThemeNerdoctaxeplus : public Theme {
public:
    ThemeNerdoctaxeplus() {
        setInitscreen2(&ui_img_NerdOctaxePlus_initscreen2_png);
        setMiningscreen2(&ui_img_NerdOctaxePlus_miningscreen2_png);
        setPortalscreen(&ui_img_NerdOctaxePlus_portalscreen_png);
        setBtcscreen(&ui_img_NerdOctaxePlus_btcscreen_png);
        setSettingsscreen(&ui_img_NerdOctaxePlus_settingsscreen_png);
        setSplashscreen2(&ui_img_NerdOctaxePlus_splashscreen2_png);
    }
};
