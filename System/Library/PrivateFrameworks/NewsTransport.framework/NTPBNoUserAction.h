/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBNoUserAction : PBCodable <NSCopying> {

	NSMutableArray* _visibleViews;

}

@property (nonatomic,retain) NSMutableArray * visibleViews;              //@synthesize visibleViews=_visibleViews - In the implementation block
+(Class)visibleViewsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addVisibleViews:(id)arg1 ;
-(void)clearVisibleViews;
-(unsigned long long)visibleViewsCount;
-(id)visibleViewsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)visibleViews;
-(void)setVisibleViews:(NSMutableArray *)arg1 ;
@end
