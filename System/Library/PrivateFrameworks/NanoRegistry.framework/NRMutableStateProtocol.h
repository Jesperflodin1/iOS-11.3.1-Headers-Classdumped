/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NRMutableStateProtocol <NSObject,NSSecureCoding,NSCopying,NRMutableStateObserverProtocol,NRMutableStateParentProtocol>
@required
+(id)diffFrom:(id)arg1 to:(id)arg2;
-(id)applyDiff:(id)arg1;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4;

@end

