/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BRCZoneRowID, BRCItemID;

@interface BRCItemGlobalID : NSObject <NSCopying> {

	BRCZoneRowID* _zoneRowID;
	BRCItemID* _itemID;

}

@property (nonatomic,readonly) BRCZoneRowID * zoneRowID;              //@synthesize zoneRowID=_zoneRowID - In the implementation block
@property (nonatomic,readonly) BRCItemID * itemID;                    //@synthesize itemID=_itemID - In the implementation block
+(id)itemGlobalIDFromLocalItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BRCItemID *)itemID;
-(BOOL)isEqualToItemGlobalID:(id)arg1 ;
-(BRCZoneRowID *)zoneRowID;
-(id)initWithZoneRowID:(id)arg1 itemID:(id)arg2 ;
@end
