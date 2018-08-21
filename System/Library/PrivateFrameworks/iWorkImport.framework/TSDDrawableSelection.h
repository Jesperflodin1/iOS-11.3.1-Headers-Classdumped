/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>

@class TSDInfoCollectionSelectionHelper, NSSet, NSString;

@interface TSDDrawableSelection : TSKSelection {

	TSDInfoCollectionSelectionHelper* _selectionHelper;

}

@property (nonatomic,retain) TSDInfoCollectionSelectionHelper * selectionHelper;              //@synthesize selectionHelper=_selectionHelper - In the implementation block
@property (nonatomic,readonly) NSSet * infos; 
@property (nonatomic,readonly) unsigned long long infoCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) NSSet * infosWithNonInteractiveInfos; 
@property (nonatomic,readonly) NSSet * nonInteractiveInfos; 
@property (nonatomic,readonly) NSSet * unlockedInfos; 
@property (nonatomic,readonly) unsigned long long unlockedInfoCount; 
@property (nonatomic,readonly) NSString * subclassDescription; 
+(Class)archivedSelectionClass;
-(void)saveToArchive:(DrawableSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const DrawableSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(id)UUIDDescription;
-(id)initWithInteractiveInfos:(id)arg1 nonInteractiveInfos:(id)arg2 ;
-(TSDInfoCollectionSelectionHelper *)selectionHelper;
-(NSSet *)nonInteractiveInfos;
-(NSSet *)infosWithNonInteractiveInfos;
-(void)setSelectionHelper:(TSDInfoCollectionSelectionHelper *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSSet *)infos;
-(BOOL)containsKindOfClass:(Class)arg1 ;
-(BOOL)containsUnlockedKindOfClass:(Class)arg1 ;
-(id)infosOfClass:(Class)arg1 ;
-(unsigned long long)infoCount;
-(NSSet *)unlockedInfos;
-(unsigned long long)unlockedInfoCount;
-(id)initWithInfos:(id)arg1 ;
-(NSString *)subclassDescription;
@end

