/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPlaceFormattedString, GEOFormattedString;

@interface GEOLaunchAndGoCardText : PBCodable <NSCopying> {

	GEOPlaceFormattedString* _body;
	GEOFormattedString* _cardTitle;
	GEOPlaceFormattedString* _commuteTitle;
	GEOFormattedString* _routeDescription;
	GEOFormattedString* _routeTitle;
	GEOPlaceFormattedString* _title;

}

@property (nonatomic,readonly) BOOL hasCardTitle; 
@property (nonatomic,retain) GEOFormattedString * cardTitle;                      //@synthesize cardTitle=_cardTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteTitle; 
@property (nonatomic,retain) GEOFormattedString * routeTitle;                     //@synthesize routeTitle=_routeTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteDescription; 
@property (nonatomic,retain) GEOFormattedString * routeDescription;               //@synthesize routeDescription=_routeDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) GEOPlaceFormattedString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasCommuteTitle; 
@property (nonatomic,retain) GEOPlaceFormattedString * commuteTitle;              //@synthesize commuteTitle=_commuteTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasBody; 
@property (nonatomic,retain) GEOPlaceFormattedString * body;                      //@synthesize body=_body - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOFormattedString *)routeDescription;
-(GEOFormattedString *)routeTitle;
-(GEOFormattedString *)cardTitle;
-(BOOL)hasBody;
-(BOOL)hasCardTitle;
-(BOOL)hasRouteTitle;
-(BOOL)hasRouteDescription;
-(BOOL)hasCommuteTitle;
-(void)setCardTitle:(GEOFormattedString *)arg1 ;
-(void)setRouteTitle:(GEOFormattedString *)arg1 ;
-(void)setRouteDescription:(GEOFormattedString *)arg1 ;
-(GEOPlaceFormattedString *)commuteTitle;
-(void)setCommuteTitle:(GEOPlaceFormattedString *)arg1 ;
-(void)setTitle:(GEOPlaceFormattedString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOPlaceFormattedString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPlaceFormattedString *)body;
-(id)dictionaryRepresentation;
-(void)setBody:(GEOPlaceFormattedString *)arg1 ;
-(BOOL)hasTitle;
@end

