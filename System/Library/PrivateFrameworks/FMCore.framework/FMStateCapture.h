/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FMCore/FMCore-Structs.h>
@interface FMStateCapture : NSObject {

	/*^block*/id _stateCaptureBlock;
	unsigned long long _handle;

}

@property (assign,nonatomic) unsigned long long handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) id stateCaptureBlock;                     //@synthesize stateCaptureBlock=_stateCaptureBlock - In the implementation block
-(os_state_data_s*)_stateCapture;
-(os_state_data_s*)stateDataForDictionary:(id)arg1 title:(id)arg2 ;
-(unsigned long long)handle;
-(id)init;
-(void)dealloc;
-(void)setHandle:(unsigned long long)arg1 ;
-(void)registerHandlerforStateCapture;
-(void)unregisterHandlerforStateCapture;
-(id)stateCaptureBlock;
-(void)setStateCaptureBlock:(id)arg1 ;
@end
