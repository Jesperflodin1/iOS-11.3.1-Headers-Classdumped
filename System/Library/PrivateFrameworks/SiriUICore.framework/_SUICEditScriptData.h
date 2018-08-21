/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SUICEditScriptData <NSObject>
@required
+(id)EditScriptDataWithArray:(id)arg1;
+(id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;
-(long long)length;
-(id)stringValue;
-(long long)lengthOfItem:(long long)arg1;
-(long long)characterIndexForItem:(long long)arg1;
-(id)stringAtIndex:(long long)arg1;
-(long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2 fallsOnWordBoundary:(BOOL*)arg3;

@end
