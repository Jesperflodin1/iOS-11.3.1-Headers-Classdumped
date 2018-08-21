/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNEncodedFetchCursor.h>

@protocol CNEncodedFetchCursor, CNContactsLogger;
@class CNContactFetchRequest, CNContactsEnvironment, CNManagedConfiguration, NSString;

@interface CNiOSEncodedPeopleFetcher : NSObject <CNEncodedFetchCursor> {

	void* _addressBook;
	CNContactFetchRequest* _contactFetchRequest;
	CNContactsEnvironment* _environment;
	/*^block*/id _completionHandler;
	id<CNEncodedFetchCursor> _cursor;
	id<CNContactsLogger> _logger;
	CNManagedConfiguration* _managedConfiguration;

}

@property (nonatomic,readonly) void* addressBook;                                        //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,readonly) CNContactFetchRequest * contactFetchRequest;              //@synthesize contactFetchRequest=_contactFetchRequest - In the implementation block
@property (nonatomic,readonly) CNContactsEnvironment * environment;                      //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) id<CNEncodedFetchCursor> cursor;                          //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) id<CNContactsLogger> logger;                              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) CNManagedConfiguration * managedConfiguration;              //@synthesize managedConfiguration=_managedConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CNContactsEnvironment *)environment;
-(id)completionHandler;
-(id<CNEncodedFetchCursor>)cursor;
-(void)fetchNextBatchWithReply:(/*^block*/id)arg1 ;
-(CNContactFetchRequest *)contactFetchRequest;
-(id)cursorWithError:(id*)arg1 ;
-(id)initWithFetchRequest:(id)arg1 addressBook:(void*)arg2 managedConfiguration:(id)arg3 completionHandler:(/*^block*/id)arg4 environment:(id)arg5 ;
-(BOOL)fetchEncodedPeopleWithError:(id*)arg1 cancelationToken:(id)arg2 batchHandler:(/*^block*/id)arg3 ;
-(void*)addressBook;
-(id<CNContactsLogger>)logger;
-(CNManagedConfiguration *)managedConfiguration;
-(void)setManagedConfiguration:(CNManagedConfiguration *)arg1 ;
@end

