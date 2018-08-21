/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableSet;

@interface CNiOSAddressBook : NSObject {

	BOOL _addressBookIsShared;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _addressBookPool;
	/*^block*/id _addressBookProvider;
	NSObject*<OS_dispatch_source> _memoryMonitoringSource;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                          //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * addressBookPool;                                    //@synthesize addressBookPool=_addressBookPool - In the implementation block
@property (nonatomic,copy,readonly) id addressBookProvider;                                       //@synthesize addressBookProvider=_addressBookProvider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> memoryMonitoringSource;              //@synthesize memoryMonitoringSource=_memoryMonitoringSource - In the implementation block
@property (nonatomic,readonly) BOOL addressBookIsShared;                                          //@synthesize addressBookIsShared=_addressBookIsShared - In the implementation block
+(void)initialize;
+(void*)newInMemoryAddressBook;
+(void*)newAddressBookWithURL:(id)arg1 ;
-(id)init;
-(id)initWithAddressBookProvider:(/*^block*/id)arg1 ;
-(void)flushPool;
-(NSMutableSet *)addressBookPool;
-(id)addressBookProvider;
-(void*)popAddressBook;
-(void*)preparedAddressBook:(void*)arg1 ;
-(void)pushAddressBook:(void*)arg1 ;
-(NSObject*<OS_dispatch_source>)memoryMonitoringSource;
-(BOOL)addressBookIsShared;
-(void)performAsynchronousWorkWithInvalidatedAddressBook:(/*^block*/id)arg1 ;
-(id)initWithContactsEnvironment:(id)arg1 ;
-(void)performSynchronousWorkWithInvalidatedAddressBook:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
@end

