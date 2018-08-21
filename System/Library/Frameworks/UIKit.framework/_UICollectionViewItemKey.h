/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath, NSString;

@interface _UICollectionViewItemKey : NSObject <NSCopying> {

	NSIndexPath* _indexPath;
	NSString* _identifier;
	BOOL _isClone;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL isClone;                                //@synthesize isClone=_isClone - In the implementation block
+(id)collectionItemKeyForCellWithIndexPath:(id)arg1 ;
+(id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2 ;
+(id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2 ;
+(id)collectionItemKeyForLayoutAttributes:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSIndexPath *)indexPath;
-(NSString *)identifier;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3 ;
-(id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3 clone:(BOOL)arg4 ;
-(BOOL)isClone;
-(id)copyAsClone:(BOOL)arg1 ;
@end

