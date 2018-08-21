/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSString, SKTileGroup, NSArray;

@interface SKTileGroupRule : NSObject <NSCopying, NSCoding> {

	NSMutableArray* _tileDefinitions;
	NSMutableArray* _tileDefinitionIDs;
	unsigned char _adjacency;
	NSString* _name;
	SKTileGroup* _parentGroup;

}

@property (nonatomic,readonly) NSArray * tileDefinitionIDs; 
@property (assign,nonatomic,__weak) SKTileGroup * parentGroup;              //@synthesize parentGroup=_parentGroup - In the implementation block
@property (assign,nonatomic) unsigned long long adjacency; 
@property (nonatomic,copy) NSArray * tileDefinitions; 
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
+(id)tileGroupRuleWithAdjacency:(unsigned long long)arg1 tileDefinitions:(id)arg2 ;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SKTileGroup *)parentGroup;
-(void)setParentGroup:(SKTileGroup *)arg1 ;
-(void)setTileDefinitionParentPointers;
-(unsigned long long)adjacency;
-(void)setAdjacency:(unsigned long long)arg1 ;
-(NSArray *)tileDefinitions;
-(void)setTileDefinitions:(NSArray *)arg1 ;
-(NSArray *)tileDefinitionIDs;
-(void)setTileDefinitionIDs:(NSArray *)arg1 ;
-(id)initWithAdjacency:(unsigned long long)arg1 tileDefinitions:(id)arg2 ;
-(void)calcTileDefinitionIDsWithTileSet:(id)arg1 ;
-(void)setTileDefinitionsFromIDsWithTileSet:(id)arg1 ;
@end

