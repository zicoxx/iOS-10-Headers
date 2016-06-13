//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@interface _SBModalViewControllerStackTransition : NSObject
{
    UIViewController *_viewController;
    unsigned int _operation;
    BOOL _animated;
    CDUnknownBlockType _completion;
}

+ (id)transitionForViewController:(id)arg1 operation:(unsigned int)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) BOOL animated; // @synthesize animated=_animated;
@property(nonatomic) unsigned int operation; // @synthesize operation=_operation;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)description;

@end

