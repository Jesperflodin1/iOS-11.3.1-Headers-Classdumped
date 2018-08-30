//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CbDrawbarContainer-Protocol.h"

@class CAGradientLayer, CbPluginCtrlsMappingController, NSMutableArray, NSString, UIImage;

@interface CbDrawbarGroup : UIView <CbDrawbarContainer>
{
    CAGradientLayer *overlay;
    UIImage *brownDrawbar;
    UIImage *creamDrawbar;
    UIImage *blackDrawbar;
    NSMutableArray *drawbars;
    CbPluginCtrlsMappingController *_pluginMappingController;
}

@property(nonatomic) CbPluginCtrlsMappingController *pluginMappingController; // @synthesize pluginMappingController=_pluginMappingController;
- (void).cxx_destruct;
- (void)removeDrawbarMappings;
- (void)addDrawbarMappings;
- (void)updateDrawbarValuesAnimated:(_Bool)arg1;
- (void)setAssetSet:(id)arg1;
- (id)imageForType:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
