//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBComposedWallpaperSpecificationLayer.h"

@class UIColor;

@interface SBComposedWallpaperSpecificationColorLayer : SBComposedWallpaperSpecificationLayer
{
    UIColor *_color;
}

+ (id)layerWithColor:(id)arg1;
+ (id)colorForLayerDictionary:(id)arg1;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)propertyListRepresentation;
- (id)init;
- (id)initWithColor:(id)arg1;
- (id)initWithLayerDictionary:(id)arg1;

@end
