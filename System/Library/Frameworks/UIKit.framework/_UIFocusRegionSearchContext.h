/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFocusSystem, UIScreen;


@protocol _UIFocusRegionSearchContext <NSObject>
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem; 
@property (nonatomic,__weak,readonly) UIScreen * screen; 
@property (nonatomic,readonly) id<UICoordinateSpace> coordinateSpace; 
@property (nonatomic,readonly) id<_UIFocusMapArea> searchArea; 
@required
-(UIScreen *)screen;
-(id<UICoordinateSpace>)coordinateSpace;
-(id<_UIFocusMapArea>)searchArea;
-(UIFocusSystem *)focusSystem;
-(void)addRegion:(id)arg1;
-(void)addRegionsInContainers:(id)arg1;
-(void)addRegionsInContainer:(id)arg1;
-(void)addRegions:(id)arg1;

@end
