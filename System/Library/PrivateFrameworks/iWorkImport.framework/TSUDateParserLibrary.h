/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSULocale, NSMutableArray, NSCondition;

@interface TSUDateParserLibrary : NSObject {

	TSULocale* mLocale;
	unsigned long long mMaxPermittedParsers;
	unsigned long long mNumberOfUses;
	unsigned long long mParsersCreated;
	NSMutableArray* mAvailableDateParsers;
	NSCondition* mParserLibraryConditionVariable;

}
-(void)dealloc;
-(id)checkoutDateParser;
-(void)returnDateParser:(id)arg1 ;
-(id)initWithLocale:(id)arg1 ;
-(void)prepareDateParserInBackground;
@end

