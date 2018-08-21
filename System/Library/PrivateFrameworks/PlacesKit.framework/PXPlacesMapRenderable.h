/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSOrderedSet;


@protocol PXPlacesMapRenderable <NSObject>
@property (__weak) id<PXPlacesMapRenderer> renderer; 
@property (__weak) id<PXPlacesMapSelectionHandler> selectionHandler; 
@property (retain) NSOrderedSet * geotaggables; 
@property (assign,nonatomic) long long index; 
@required
-(void)setIndex:(long long)arg1;
-(long long)index;
-(void)setRenderer:(id)arg1;
-(void)setSelectionHandler:(id)arg1;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(id<PXPlacesMapRenderer>)renderer;
-(NSOrderedSet *)geotaggables;
-(void)setGeotaggables:(id)arg1;

@end

