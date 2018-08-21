/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol MFLazyCacheDelegate;
@class NSRecursiveLock, NSCache, NSString;

@interface MFLazyCache : NSObject <NSCacheDelegate> {

	NSRecursiveLock* _lock;
	NSCache* _storage;
	struct {
		unsigned delegateRespondsToLazyCacheWillEvictObject : 1;
	}  _flags;
	id<MFLazyCacheDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MFLazyCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(id)init;
-(id<MFLazyCacheDelegate>)delegate;
-(void)setDelegate:(id<MFLazyCacheDelegate>)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)_exchangeOriginalObject:(id)arg1 forKey:(id)arg2 withObject:(id)arg3 ;
-(id)storedObjectForKey:(id)arg1 ;
-(long long)waiterCountForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 generator:(/*^block*/id)arg2 ;
-(id)initWithCountLimit:(unsigned long long)arg1 ;
@end

