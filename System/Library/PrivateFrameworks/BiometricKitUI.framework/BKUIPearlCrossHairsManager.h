/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BiometricKitUI/BiometricKitUI-Structs.h>
@class NSMutableArray;

@interface BKUIPearlCrossHairsManager : NSObject {

	vector<InstanceInfo, std::__1::allocator<InstanceInfo> >* _instanceVector;
	NSMutableArray* _springInstances;

}

@property (readonly) NSMutableArray * springInstances;              //@synthesize springInstances=_springInstances - In the implementation block
@property (readonly) InstanceInfo* instanceData; 
@property (assign,nonatomic) BOOL grayscale; 
-(void)addInstance:(id)arg1 ;
-(id)init;
-(void)setTarget:;
-(void)setValue:;
-(void)update:(double)arg1 ;
-(BOOL)grayscale;
-(void)setGrayscale:(BOOL)arg1 ;
-(InstanceInfo*)instanceData;
-(NSMutableArray *)springInstances;
-(void)setSpringsStates:(unsigned long long)arg1 ;
@end

