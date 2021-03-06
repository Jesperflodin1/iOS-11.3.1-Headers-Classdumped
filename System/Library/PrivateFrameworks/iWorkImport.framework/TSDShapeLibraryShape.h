/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDShapeLibraryObject.h>
#import <iWorkImport/TSDShapeCollectionShape.h>

@class NSString, TSUBezierPath, NSArray, NSNumber;

@interface TSDShapeLibraryShape : TSDShapeLibraryObject <TSDShapeCollectionShape> {

	BOOL _rendersSlowly;
	NSString* _bezierPathString;
	TSUBezierPath* _bezierPath;
	NSString* _keywordDelimiter;

}

@property (nonatomic,retain) TSUBezierPath * p_bezierPath;                //@synthesize bezierPath=_bezierPath - In the implementation block
@property (nonatomic,copy) NSString * p_keywordDelimiter;                 //@synthesize keywordDelimiter=_keywordDelimiter - In the implementation block
@property (nonatomic,readonly) NSArray * categoryIDs; 
@property (nonatomic,readonly) NSString * localizationKey; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSNumber * shapeID; 
@property (nonatomic,readonly) NSString * bezierPathString;               //@synthesize bezierPathString=_bezierPathString - In the implementation block
@property (nonatomic,readonly) BOOL rendersSlowly;                        //@synthesize rendersSlowly=_rendersSlowly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * keywords; 
@property (nonatomic,readonly) NSString * accessibilityName; 
@property (nonatomic,readonly) int shapeType; 
+(id)shapeIDForShapeFromDictionary:(id)arg1 ;
+(id)localizedNameForShapeFromDictionary:(id)arg1 ;
+(id)localizedKeywordsForShapeFromDictionary:(id)arg1 keywordDelimiter:(id)arg2 ;
+(id)baseKeywordsForShapeFromDictionary:(id)arg1 keywordDelimiter:(id)arg2 ;
+(id)baseNameForShapeFromDictionary:(id)arg1 ;
+(id)p_localizationKeyForShapeFromDictionary:(id)arg1 ;
+(id)p_stringForKey:(id)arg1 inBaseStringsFileWithName:(id)arg2 ;
-(id)pathSourceWithSize:(CGSize)arg1 ;
-(unsigned long long)positionInCategoryWithID:(id)arg1 ;
-(NSString *)accessibilityName;
-(NSArray *)categoryIDs;
-(TSUBezierPath *)p_bezierPath;
-(NSString *)p_keywordDelimiter;
-(id)initWithDictionary:(id)arg1 keywordDelimiter:(id)arg2 ;
-(id)p_categoryMetadata;
-(NSString *)bezierPathString;
-(BOOL)rendersSlowly;
-(void)setP_bezierPath:(TSUBezierPath *)arg1 ;
-(void)setP_keywordDelimiter:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(NSString *)localizationKey;
-(NSNumber *)shapeID;
-(NSArray *)keywords;
-(int)shapeType;
@end

