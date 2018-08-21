/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDDrawableSelection.h>

@class NSSet;

@interface TSDGroupSelection : TSDDrawableSelection {

	BOOL _hasSelectedInfosInNonGroupContainer;

}

@property (assign,nonatomic) BOOL hasSelectedInfosInNonGroupContainer;              //@synthesize hasSelectedInfosInNonGroupContainer=_hasSelectedInfosInNonGroupContainer - In the implementation block
@property (nonatomic,readonly) NSSet * containerGroups; 
@property (nonatomic,readonly) BOOL isCrossContainerSelection; 
+(Class)archivedSelectionClass;
-(id)initWithContainerGroups:(id)arg1 hasSelectedInfosInNonGroupContainer:(BOOL)arg2 ;
-(NSSet *)containerGroups;
-(BOOL)hasSelectedInfosInNonGroupContainer;
-(BOOL)isCrossContainerSelection;
-(id)initWithGroupInfo:(id)arg1 ;
-(void)setHasSelectedInfosInNonGroupContainer:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)subclassDescription;
@end

