/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, GEOMapRegion;


@protocol GEOTransitLineItem <GEOTransitLine>
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) id<GEOTransitAttribution> attribution; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) BOOL isIncidentsTTLExpired; 
@property (nonatomic,readonly) BOOL hasIncidentComponent; 
@property (nonatomic,readonly) BOOL hasEncyclopedicInfo; 
@property (nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
@required
-(GEOMapRegion *)mapRegion;
-(id<GEOTransitAttribution>)attribution;
-(NSArray *)labelItems;
-(NSArray *)incidents;
-(BOOL)isIncidentsTTLExpired;
-(BOOL)hasIncidentComponent;
-(BOOL)hasEncyclopedicInfo;
-(id<GEOEncyclopedicInfo>)encyclopedicInfo;

@end

