/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UILegacyFocusRegion <NSObject>
@required
-(BOOL)canBecomeFocused;
-(BOOL)_isTransparentFocusRegion;
-(id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2;
-(id)_focusRegionGuides;
-(id)_focusRegionFocusSystem;
-(CGRect*)_focusRegionFrame;
-(BOOL)_legacy_isEligibleForFocusInteraction;
-(BOOL)_isPromiseFocusRegion;
-(id)_fulfillPromisedFocusRegion;
-(id)_focusRegionView;
-(id)_focusDebugOverlayParentView;

@end
