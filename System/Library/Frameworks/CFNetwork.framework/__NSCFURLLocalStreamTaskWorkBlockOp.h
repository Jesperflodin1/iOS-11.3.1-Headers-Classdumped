/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/__NSCFURLLocalStreamTaskWork.h>

@interface __NSCFURLLocalStreamTaskWorkBlockOp : __NSCFURLLocalStreamTaskWork {

	/*^block*/id _block;
	BOOL _shouldWaitForTls;

}
+(id)opWithBlock:(/*^block*/id)arg1 description:(const char*)arg2 ;
-(BOOL)shouldWaitForTLS;
-(void)markBlockAsWaitingOnTls:(BOOL)arg1 ;
-(void)dealloc;
-(void)executeBlock;
@end

