//
//  WDDevice.h
//  WDBaseLib
//
//  Created by Wind on 2023/1/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDDevice : NSObject

//系统名称
+ (NSString *)getDeviceSystemName;

//系统版本号
+ (NSString *)getDeviceSystemVersion;

//设备用户名称
+ (NSString *)getDeviceSettingName;

//设备机型
+ (NSString *)getDeviceTypeString;

//设备类型名称
+ (NSString *)getDeviceModel;

//设备内部编号
+ (NSString *)getDeviceMachine;
// 设备内存 单位：字节
+ (NSString *)getDeviceTotalMemory;

//获取当前可用内存
+ (NSString *)getAvailableMemorySize;

//磁盘内存
+ (CGFloat)getDeviceTotalDisk;

//磁盘剩余内存
+ (CGFloat)getDeviceFreeDisk;

//设备屏幕尺寸
+ (NSString *)getDeviceLogicalScreenSize;

//设备CPU个数
+ (NSInteger)getDeviceCPUNum;

//IDFA
+ (NSString *)getDeviceIDFA;

+ (NSString *)getDeviceIDFV;

+ (NSString *)getUUID;

+ (NSString *)getMacAddress;

// 设备电量 电池百分比    70
+ (NSString *)getDeviceBatteryLevel;

+ (BOOL)getDeviceBatteryChargingState;

//是否开启WiFi
+ (BOOL)deviceisWiFiEnabled;

//是否代理
+ (BOOL)deviceIsUseProxy;

//是否模拟器
+ (BOOL)deviceIsSimulator;

//是否越狱
+ (BOOL)isJailbroken;

//iPhone中SIM卡的个数
- (int)getSimCountInPhone;

//SIM卡信息
+ (NSDictionary *)getSimInfoInPhone;

+ (NSString *)getScreenResolution;

+ (NSString *)getScreenResolutionHeight;

+ (NSString *)getScreenResolutionWidth;

+ (NSString *)fetchWiFiInfo;

+ (NSDictionary *)getIPAddresses;

+ (NSString *)getIPAddress;


+ (BOOL)isWIFIConnection;

+ (NSString *)getTotalDiskSpace;

+ (NSString *)getFreeDiskSpace;

+ (NSString *)getPhysicalSize;

+ (NSString *)getSerialNumber;

+ (NSString *)getCurrentTimeStamp;

+ (BOOL)isOpenTheProxy;

+ (BOOL)isVPNOn;
// language en
+ (NSString*)getPreferredLanguage;

+ (NSString*)getLocaleDisplayLanguagee;

//获取当前地区的代码
+ (NSString *)getAreaCode;

// 开机时间到现在的毫秒数（包括睡眠时间）
+ (long)getSystemTotalUptime;

// 从开机到现在的毫秒数（不包括睡眠时间
+ (long)getSystemAliveUptime;

#pragma mark - related carrier
+ (NSString *)getCarrierName;

+ (NSString *)getCountryCode;

+ (NSString *)getNetworkCode;

+ (NSString *)getNetworkType;

+ (NSString *)getTimezone;

#pragma mark - wifi
+ (NSString *)getWiFiMac;

+ (NSString *)getWiFiSsid;

@end

NS_ASSUME_NONNULL_END
