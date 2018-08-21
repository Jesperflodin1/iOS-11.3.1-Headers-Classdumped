/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MPAVRoutingViewControllerUpdate : NSObject {

	BOOL _canGroup;
	BOOL _hasPendingPickedRoutes;
	NSArray* _pickedRoutes;
	NSArray* _pendingPickedRoutes;
	NSArray* _displayableAvailableRoutes;
	NSArray* _displayAsPickedRoutes;

}

@property (nonatomic,copy) NSArray * pickedRoutes;                            //@synthesize pickedRoutes=_pickedRoutes - In the implementation block
@property (nonatomic,copy) NSArray * pendingPickedRoutes;                     //@synthesize pendingPickedRoutes=_pendingPickedRoutes - In the implementation block
@property (nonatomic,copy) NSArray * displayableAvailableRoutes;              //@synthesize displayableAvailableRoutes=_displayableAvailableRoutes - In the implementation block
@property (nonatomic,copy) NSArray * displayAsPickedRoutes;                   //@synthesize displayAsPickedRoutes=_displayAsPickedRoutes - In the implementation block
@property (assign,nonatomic) BOOL canGroup;                                   //@synthesize canGroup=_canGroup - In the implementation block
@property (assign,nonatomic) BOOL hasPendingPickedRoutes;                     //@synthesize hasPendingPickedRoutes=_hasPendingPickedRoutes - In the implementation block
-(NSArray *)pickedRoutes;
-(BOOL)hasPendingPickedRoutes;
-(NSArray *)pendingPickedRoutes;
-(void)setPickedRoutes:(NSArray *)arg1 ;
-(void)setPendingPickedRoutes:(NSArray *)arg1 ;
-(NSArray *)displayableAvailableRoutes;
-(void)setDisplayableAvailableRoutes:(NSArray *)arg1 ;
-(NSArray *)displayAsPickedRoutes;
-(void)setDisplayAsPickedRoutes:(NSArray *)arg1 ;
-(void)setCanGroup:(BOOL)arg1 ;
-(void)setHasPendingPickedRoutes:(BOOL)arg1 ;
-(BOOL)canGroup;
@end

