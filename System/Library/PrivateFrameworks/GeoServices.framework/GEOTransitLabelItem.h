/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GEOTransitLabelItem <NSObject>
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSString * labelString; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> labelArtwork; 
@required
-(NSString *)labelString;
-(id<GEOTransitArtworkDataSource>)labelArtwork;
-(long long)type;

@end

