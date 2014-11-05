/*
* This header is generated by classdump-dyld 0.7
* Operating System: Version 8.1 (Build 12B411)
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NFHardwareControllerInfo : NSObject {

	unsigned long long _siliconVersion;
	unsigned long long _ROMVersion;
	unsigned long long _firmwareVersion;
	unsigned long long _firmwareRevision;
	unsigned long long _middlewareVersion;

}

@property (nonatomic,readonly) unsigned long long siliconVersion;
@property (nonatomic,readonly) unsigned long long ROMVersion;
@property (nonatomic,readonly) unsigned long long firmwareVersion;
@property (nonatomic,readonly) unsigned long long firmwareRevision;
@property (nonatomic,readonly) unsigned long long middlewareVersion;

-(unsigned long long)firmwareRevision;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)siliconVersion;
-(unsigned long long)ROMVersion;
-(unsigned long long)firmwareVersion;
-(unsigned long long)middlewareVersion;
@end
