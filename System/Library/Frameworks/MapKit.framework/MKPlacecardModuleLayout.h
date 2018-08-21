/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface MKPlacecardModuleLayout : PBCodable <NSCopying> {

	NSMutableArray* _modules;

}

@property (nonatomic,retain) NSMutableArray * modules;              //@synthesize modules=_modules - In the implementation block
+(Class)modulesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearModules;
-(void)addModules:(id)arg1 ;
-(unsigned long long)modulesCount;
-(id)modulesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)modules;
-(void)setModules:(NSMutableArray *)arg1 ;
@end
