/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSException.h>

@class TCMessageEntry;

@interface TCMessageException : NSException {

	TCMessageEntry* m_entry;

}
+(void)initialize;
+(id)exceptionWithMessage:(id)arg1 ;
+(id)exceptionWithUntaggedMessage:(id)arg1 ;
+(void)raise:(id)arg1 ;
+(void)raiseUntaggedMessage:(id)arg1 ;
+(id)nsError:(id)arg1 domain:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)getEntry;
-(id)initWithMessage:(id)arg1 ;
-(id)initWithUntaggedMessage:(id)arg1 ;
@end

