/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying> {

	NSMutableArray* _defaultTags;
	NSMutableArray* _disabledPortraitTags;
	NSMutableArray* _optionalTags;

}

@property (nonatomic,retain) NSMutableArray * defaultTags;                       //@synthesize defaultTags=_defaultTags - In the implementation block
@property (nonatomic,retain) NSMutableArray * optionalTags;                      //@synthesize optionalTags=_optionalTags - In the implementation block
@property (nonatomic,retain) NSMutableArray * disabledPortraitTags;              //@synthesize disabledPortraitTags=_disabledPortraitTags - In the implementation block
+(Class)defaultTagsType;
+(Class)optionalTagsType;
+(Class)disabledPortraitTagsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addDefaultTags:(id)arg1 ;
-(void)addOptionalTags:(id)arg1 ;
-(void)addDisabledPortraitTags:(id)arg1 ;
-(void)clearDefaultTags;
-(unsigned long long)defaultTagsCount;
-(id)defaultTagsAtIndex:(unsigned long long)arg1 ;
-(void)clearOptionalTags;
-(unsigned long long)optionalTagsCount;
-(id)optionalTagsAtIndex:(unsigned long long)arg1 ;
-(void)clearDisabledPortraitTags;
-(unsigned long long)disabledPortraitTagsCount;
-(id)disabledPortraitTagsAtIndex:(unsigned long long)arg1 ;
-(void)setDefaultTags:(NSMutableArray *)arg1 ;
-(void)setOptionalTags:(NSMutableArray *)arg1 ;
-(void)setDisabledPortraitTags:(NSMutableArray *)arg1 ;
-(NSMutableArray *)defaultTags;
-(NSMutableArray *)optionalTags;
-(NSMutableArray *)disabledPortraitTags;
@end

