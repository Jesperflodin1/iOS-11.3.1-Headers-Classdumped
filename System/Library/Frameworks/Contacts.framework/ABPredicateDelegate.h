/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABPredicateDelegate <NSObject>
@optional
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 moreComing:(BOOL)arg3;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3 moreComing:(BOOL)arg4;

@required
-(BOOL)predicateShouldContinue:(id)arg1;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;

@end
