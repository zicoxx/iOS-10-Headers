//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

@class NSMutableArray, NSTimer, SBLockScreenBatteryChargingView;

@interface SBLockScreenBatteryChargingViewController : SBDashBoardViewControllerBase
{
    BOOL _shouldDisplayBattery;
    SBLockScreenBatteryChargingView *_chargingView;
    NSTimer *_visibilityTimer;
    NSMutableArray *_connectedDevices;
    id <SBLockScreenBatteryChargingViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBLockScreenBatteryChargingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)presentationStyle;
- (void)_visibilityTimerFired:(id)arg1;
- (void)showChargeLevelWithBatteryVisible:(BOOL)arg1;
- (id)chargingView;
- (BOOL)batteryVisible;
- (void)_clearVisibilityTimer;
- (void)prepareForDismissalWithAnimation:(BOOL)arg1;
- (void)presentWithAnimation:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initForDisplayOfBattery:(BOOL)arg1;

@end

