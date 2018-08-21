/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IKViewElementRegistry : NSObject {

	NSMutableDictionary* _classMap;
	NSMutableDictionary* _typeMap;
	NSMutableDictionary* _dependentMap;

}
-(id)init;
-(Class)elementClassByTagName:(id)arg1 ;
-(BOOL)isDependentByTagName:(id)arg1 ;
-(unsigned long long)elementTypeByTagName:(id)arg1 ;
-(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 ;
-(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(BOOL)arg4 ;
@end
