/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocomplete/CNAutocompleteRecentResult.h>

@interface CNAutocompleteInfrequentRecentResult : CNAutocompleteRecentResult {

	unsigned long long _dateCount;

}

@property (assign) unsigned long long dateCount;              //@synthesize dateCount=_dateCount - In the implementation block
+(unsigned long long)category;
+(id)comparators;
+(id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 dateCount:(unsigned long long)arg4 date:(id)arg5 ;
+(id)groupResultWithDisplayName:(id)arg1 dateCount:(unsigned long long)arg2 date:(id)arg3 ;
-(unsigned long long)dateCount;
-(void)setDateCount:(unsigned long long)arg1 ;
@end

