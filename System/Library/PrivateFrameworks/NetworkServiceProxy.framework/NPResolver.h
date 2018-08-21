/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/NWResolver.h>

@interface NPResolver : NWResolver {

	/*^block*/id _resolveCompletionHandler;

}

@property (copy) id resolveCompletionHandler;              //@synthesize resolveCompletionHandler=_resolveCompletionHandler - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setResolveCompletionHandler:(id)arg1 ;
-(id)resolveCompletionHandler;
-(void)resolveWithCompletionHandler:(/*^block*/id)arg1 ;
@end

