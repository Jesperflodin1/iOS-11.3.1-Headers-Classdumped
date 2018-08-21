/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@class NSMutableArray, NSArray;

@interface NSTextStorage : NSMutableAttributedString {

	NSRange _editedRange;
	long long _editedDelta;
	struct {
		unsigned editedMask : 8;
		unsigned postWillProcess : 1;
		unsigned postDidProcess : 1;
		unsigned  : 6;
		unsigned disabled : 16;
	}  _flags;
	NSMutableArray* _layoutManagers;
	id _sideData;

}

@property (nonatomic,copy,readonly) NSArray * layoutManagers; 
@property (nonatomic,readonly) unsigned long long editedMask; 
@property (nonatomic,readonly) NSRange editedRange; 
@property (nonatomic,readonly) long long changeInLength; 
@property (assign,nonatomic,__weak) id<NSTextStorageDelegate> delegate; 
@property (nonatomic,readonly) BOOL fixesAttributesLazily; 
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)_undoRedoTextOperation:(id)arg1 ;
-(id)_undoRedoAttributedSubstringFromRange:(NSRange)arg1 ;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(id)init;
-(id<NSTextStorageDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<NSTextStorageDelegate>)arg1 ;
-(void)dealloc;
-(Class)classForCoder;
-(void)beginEditing;
-(void)endEditing;
-(void)coordinateEditing:(/*^block*/id)arg1 ;
-(void)_setUsesSimpleTextEffects:(BOOL)arg1 ;
-(BOOL)_usesSimpleTextEffects;
-(BOOL)_shouldSetOriginalFontAttribute;
-(void)coordinateAccess:(/*^block*/id)arg1 ;
-(void)coordinateReading:(/*^block*/id)arg1 ;
-(BOOL)_isEditing;
-(void)addLayoutManager:(id)arg1 ;
-(unsigned long long)editedMask;
-(NSRange)editedRange;
-(id)cuiCatalog;
-(BOOL)_lockForReading;
-(void)_setForceFixAttributes:(BOOL)arg1 ;
-(id)cuiStyleEffects;
-(BOOL)_lockForWriting;
-(BOOL)_attributeFixingInProgress;
-(void)_setAttributeFixingInProgress:(BOOL)arg1 ;
-(void)_notifyEdited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 invalidatedRange:(NSRange)arg4 ;
-(void)fontSetChanged;
-(void)_setEditedRange:(NSRange)arg1 ;
-(BOOL)_lockForWritingWithExceptionHandler:(BOOL)arg1 ;
-(BOOL)fixesAttributesLazily;
-(NSRange)_rangeByEstimatingAttributeFixingForRange:(NSRange)arg1 ;
-(BOOL)_forceFixAttributes;
-(void)setEditedMask:(unsigned long long)arg1 ;
-(void)ensureAttributesAreFixedInRange:(NSRange)arg1 ;
-(void)_unlock;
-(void)removeLayoutManager:(id)arg1 ;
-(void)invalidateAttributesInRange:(NSRange)arg1 ;
-(long long)changeInLength;
-(NSArray *)layoutManagers;
-(void)processEditing;
-(void)finalize;
@end

