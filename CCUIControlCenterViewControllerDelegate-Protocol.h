//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CCUIControlCenterViewController, UIGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, _UIBackdropView;

@protocol CCUIControlCenterViewControllerDelegate <NSObject>
- (id <CCUIControlCenterSystemAgent>)controlCenterSystemAgentForControlCenterViewController:(CCUIControlCenterViewController *)arg1;
- (void)controlCenterViewController:(CCUIControlCenterViewController *)arg1 backdropViewDidUpdate:(_UIBackdropView *)arg2;
- (void)controlCenterViewController:(CCUIControlCenterViewController *)arg1 handlePan:(UIPanGestureRecognizer *)arg2;
- (void)controlCenterViewController:(CCUIControlCenterViewController *)arg1 handleTap:(UITapGestureRecognizer *)arg2;
- (BOOL)controlCenterViewController:(CCUIControlCenterViewController *)arg1 canHandleGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)controlCenterViewControllerWantsDismissal:(CCUIControlCenterViewController *)arg1 animated:(BOOL)arg2 completion:(void (^)(void))arg3;
- (void)controlCenterViewControllerWantsDismissal:(CCUIControlCenterViewController *)arg1;
@end
