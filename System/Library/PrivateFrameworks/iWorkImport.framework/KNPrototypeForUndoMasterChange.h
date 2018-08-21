/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSSPropertySource.h>

@class KNSlideStyle, NSUUID, NSArray, NSDictionary, KNMasterSlide, NSString;

@interface KNPrototypeForUndoMasterChange : TSPObject <TSSPropertySource> {

	KNSlideStyle* _style;
	NSUUID* _masterSlideId;
	NSArray* _drawableInfoIdList;
	NSArray* _placeholders;
	NSArray* _placeholderTagsList;
	NSArray* _childInfos;
	NSDictionary* _placeholdersForTags;

}

@property (nonatomic,retain) KNSlideStyle * slideStyle;                         //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) KNMasterSlide * master; 
@property (nonatomic,readonly) NSArray * childInfos;                            //@synthesize childInfos=_childInfos - In the implementation block
@property (nonatomic,readonly) NSArray * placeholders;                          //@synthesize placeholders=_placeholders - In the implementation block
@property (nonatomic,readonly) NSDictionary * placeholdersForTags;              //@synthesize placeholdersForTags=_placeholdersForTags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)blobWithSlide:(id)arg1 ;
-(KNSlideStyle *)slideStyle;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchive:(PrototypeForUndoMasterChangeArchive*)arg1 archiver:(id)arg2 ;
-(void)didInitFromSOS;
-(NSDictionary *)placeholdersForTags;
-(void)rebuildChildInfosAndPlaceholders;
-(void)setSlideStyle:(KNSlideStyle *)arg1 ;
-(void)migrateStyles;
-(void)dealloc;
-(NSString *)description;
-(id)objectForProperty:(int)arg1 ;
-(id)initWithSlide:(id)arg1 ;
-(KNMasterSlide *)master;
-(id)boxedObjectForProperty:(int)arg1 ;
-(BOOL)containsProperty:(int)arg1 ;
-(int)intValueForProperty:(int)arg1 ;
-(float)floatValueForProperty:(int)arg1 ;
-(double)doubleValueForProperty:(int)arg1 ;
-(double)CGFloatValueForProperty:(int)arg1 ;
-(NSArray *)childInfos;
-(NSArray *)placeholders;
@end

