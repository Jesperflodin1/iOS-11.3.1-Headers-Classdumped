/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPAbstractMutableLargeArraySegment.h>

@interface TSPMutableLargeNumberArraySegment : TSPAbstractMutableLargeArraySegment
-(void)saveToMessage:(LargeNumberArraySegment*)arg1 archiver:(id)arg2 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(unsigned long long)estimatedByteSizeOfElement:(id)arg1 ;
-(void)loadFromMessage:(const LargeNumberArraySegment*)arg1 unarchiver:(id)arg2 ;
@end
