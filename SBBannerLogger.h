//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFileLogger.h"

@interface SBBannerLogger : SBFileLogger
{
}

- (id)logPrefixForCategory:(id)arg1 destination:(unsigned int)arg2;
- (id)logPreferenceName;
- (void)_setLevel:(int)arg1;
- (void)_setEnabled:(BOOL)arg1;
- (id)name;
- (int)level;

@end

