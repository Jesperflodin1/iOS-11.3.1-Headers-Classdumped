/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNVCardWriting : NSObject
+(id)stringWithPerson:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(void)serializePerson:(id)arg1 withSerializer:(id)arg2 options:(id)arg3 ;
+(id)dataWithPerson:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)blacklistedMeCardFields;
+(id)blacklistFieldsForPerson:(id)arg1 options:(id)arg2 ;
+(id)scopeForPerson:(id)arg1 options:(id)arg2 ;
+(void)makevCardWithBuilder:(id)arg1 serializer:(id)arg2 options:(id)arg3 ;
+(id)stringWithPeople:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)dataWithPeople:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end
