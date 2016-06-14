//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SBAppViewStatusBarDescriptor : NSObject
{
    BOOL _forceHidden;
    NSString *_breadcrumbTitle;
    NSString *_breadcrumbSecondaryTitle;
}

+ (id)statusBarDescriptorWithForceHidden:(BOOL)arg1;
@property(copy, nonatomic) NSString *breadcrumbSecondaryTitle; // @synthesize breadcrumbSecondaryTitle=_breadcrumbSecondaryTitle;
@property(copy, nonatomic) NSString *breadcrumbTitle; // @synthesize breadcrumbTitle=_breadcrumbTitle;
@property(nonatomic, getter=isForcedHidden) BOOL forceHidden; // @synthesize forceHidden=_forceHidden;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithForceHidden:(BOOL)arg1;

@end
