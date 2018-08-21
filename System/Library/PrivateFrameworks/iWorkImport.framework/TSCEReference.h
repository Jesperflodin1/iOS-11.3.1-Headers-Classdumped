/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString;

@interface TSCEReference : NSObject {

	TSCECReference mRef;
	NSString* mOverrideText;
	NSString* mOverrideTextAsTyped;
	unsigned char mStickyBits;
	BOOL mWasConstructedViaNames;

}
-(id)referenceTextWithCalculationEngine:(id)arg1 hostTableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(TSCERangeRef)rangeRef;
-(id)initWithRangeRef:(const TSCERangeRef*)arg1 ;
-(UUIDData<TSP::UUIDData>)tableUID;
-(void)setStickyBits:(unsigned char)arg1 ;
-(unsigned char)stickyBits;
-(id)initWithCellRef:(const TSCECellRef*)arg1 ;
-(void)setWasConstructedViaNames:(BOOL)arg1 ;
-(void)setOverrideText:(id)arg1 ;
-(id)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(id)arg1 partial:(BOOL)arg2 ;
-(id)rangeReference;
-(id)referenceTextWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 ;
-(id)overrideText;
-(void)setOverrideTextAsTyped:(id)arg1 ;
-(id)overrideTextAsTyped;
-(BOOL)wasConstructedViaNames;
-(TSCECReference)cReference;
-(id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 hostTableUID:(const UUIDData<TSP::UUIDData>*)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(BOOL)arg5 ;
-(id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(BOOL)arg5 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
@end

