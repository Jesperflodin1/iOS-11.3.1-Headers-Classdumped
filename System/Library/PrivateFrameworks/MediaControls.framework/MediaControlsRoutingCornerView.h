/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <ControlCenterUIKit/CCUICAPackageView.h>

@interface MediaControlsRoutingCornerView : CCUICAPackageView {

	BOOL _routesAvailable;
	BOOL _routing;
	BOOL _shouldPauseAnimations;

}

@property (assign,getter=routesAreAvailable,nonatomic) BOOL routesAvailable;              //@synthesize routesAvailable=_routesAvailable - In the implementation block
@property (assign,getter=isRouting,nonatomic) BOOL routing;                               //@synthesize routing=_routing - In the implementation block
@property (assign,nonatomic) BOOL shouldPauseAnimations;                                  //@synthesize shouldPauseAnimations=_shouldPauseAnimations - In the implementation block
-(void)setRouting:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateGlyph;
-(BOOL)routesAreAvailable;
-(BOOL)isRouting;
-(BOOL)shouldPauseAnimations;
-(void)setRoutesAvailable:(BOOL)arg1 ;
-(void)setShouldPauseAnimations:(BOOL)arg1 ;
@end
