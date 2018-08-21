/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCOAddress.h>

@class TSURangeList;

@interface TSKCORangeAddress : TSKCOAddress {

	TSURangeList* _rangeList;

}

@property (nonatomic,readonly) TSURangeList * rangeList;              //@synthesize rangeList=_rangeList - In the implementation block
-(void)saveToArchiver:(id)arg1 message:(Address*)arg2 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Address*)arg2 ;
-(TSURangeList *)rangeList;
-(id)addressWithNewRangeList:(id)arg1 ;
-(id)initWithParent:(id)arg1 rangeList:(id)arg2 ;
-(id)initWithParent:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithParent:(id)arg1 location:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
-(id)addressWithNewRange:(NSRange)arg1 ;
-(id)pathElement;
-(NSRange)onlyRange;
-(unsigned long long)totalLengthOfRanges;
@end

