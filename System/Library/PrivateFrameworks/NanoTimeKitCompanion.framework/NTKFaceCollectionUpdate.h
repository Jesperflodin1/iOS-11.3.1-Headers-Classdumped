/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface NTKFaceCollectionUpdate : NSObject {

	long long _type;
	NSUUID* _uuid;
	/*^block*/id _block;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) id block;                    //@synthesize block=_block - In the implementation block
+(id)updateWithType:(long long)arg1 uuid:(id)arg2 block:(/*^block*/id)arg3 ;
-(long long)type;
-(id)block;
-(NSUUID *)uuid;
@end

