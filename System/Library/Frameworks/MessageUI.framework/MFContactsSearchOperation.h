/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MFContactsSearchManager, NSNumber, NSString, NSOrderedSet;

@interface MFContactsSearchOperation : NSOperation {

	void* _addressBook;
	MFContactsSearchManager* _owner;
	NSNumber* _taskID;
	NSString* _text;
	NSOrderedSet* _properties;
	NSString* _sendingAddress;

}

@property (nonatomic,readonly) void* addressBook;                            //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,readonly) MFContactsSearchManager * owner;              //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) NSNumber * taskID;                            //@synthesize taskID=_taskID - In the implementation block
@property (nonatomic,readonly) NSString * text;                              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * properties;                    //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSString * sendingAddress;                    //@synthesize sendingAddress=_sendingAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
+(id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5 ;
-(void)dealloc;
-(unsigned long long)type;
-(NSString *)text;
-(MFContactsSearchManager *)owner;
-(NSOrderedSet *)properties;
-(NSString *)sendingAddress;
-(NSNumber *)taskID;
-(void*)addressBook;
@end
