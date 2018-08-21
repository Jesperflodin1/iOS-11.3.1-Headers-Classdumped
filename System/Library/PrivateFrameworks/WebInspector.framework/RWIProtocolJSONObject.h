/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolJSONObject : NSObject {

	RefPtr<WTF::JSONImpl::Object, WTF::DumbPtrTraits<WTF::JSONImpl::Object> >* _object;

}
-(void)removeKey:(id)arg1 ;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(int)integerForKey:(id)arg1 ;
-(id)initWithJSONObject:(const Object*)arg1 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(RefPtr<WTF::JSONImpl::Object, WTF::DumbPtrTraits<WTF::JSONImpl::Object> >*)toJSONObject;
-(void)setJSONArray:(RefPtr<WTF::JSONImpl::Array, WTF::DumbPtrTraits<WTF::JSONImpl::Array> >*)arg1 forKey:(id)arg2 ;
-(RefPtr<WTF::JSONImpl::Array, WTF::DumbPtrTraits<WTF::JSONImpl::Array> >*)JSONArrayForKey:(id)arg1 ;
-(void)setInteger:(int)arg1 forKey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
@end

