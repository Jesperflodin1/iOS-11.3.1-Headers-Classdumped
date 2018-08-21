/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTopicNumberHints.h>

@class TSUPointerKeyDictionary, NSString;

@interface TSWPMutableTopicNumberHints : NSObject <TSWPTopicNumberHints> {

	TSUPointerKeyDictionary* _numbersForListStyle;
	unsigned long long _charIndex;
	unsigned long long _validThroughCharIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)p_deepCopyDictionary:(id)arg1 ;
-(void)advanceToCharIndex:(unsigned long long)arg1 storage:(id)arg2 ;
-(void)setTopicNumber:(unsigned long long)arg1 forList:(id)arg2 level:(unsigned long long)arg3 charIndex:(unsigned long long)arg4 ;
-(BOOL)isEquivalentStateToTopicNumberHints:(id)arg1 ;
-(void)backUpByOneParagraphWithPreviousState:(id)arg1 storage:(id)arg2 ;
-(unsigned long long)charIndexValidThrough;
-(void)setCharIndex:(unsigned long long)arg1 validThroughCharIndex:(unsigned long long)arg2 ;
-(unsigned long long)nextTopicNumberForList:(id)arg1 level:(unsigned long long)arg2 ;
-(unsigned long long)previousCharIndexForList:(id)arg1 level:(unsigned long long)arg2 ;
-(void)offsetCharIndexBy:(long long)arg1 startCharIndex:(unsigned long long)arg2 ;
-(void)unarchiveSetEntries:(NSMutableArray*)arg1 forListStyle:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)entries;
-(unsigned long long)charIndex;
@end
