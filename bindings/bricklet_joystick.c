/* ***********************************************************
 * This file was automatically generated on 2012-07-23.      *
 *                                                           *
 * If you have a bugfix for this file and want to commit it, *
 * please fix the bug in the generator. You can find a link  *
 * to the generator git on tinkerforge.com                   *
 *************************************************************/

#include "bricklet_joystick.h"

#include <string.h>

#define FUNCTION_GET_POSITION 1
#define FUNCTION_IS_PRESSED 2
#define FUNCTION_GET_ANALOG_VALUE 3
#define FUNCTION_CALIBRATE 4
#define FUNCTION_SET_POSITION_CALLBACK_PERIOD 5
#define FUNCTION_GET_POSITION_CALLBACK_PERIOD 6
#define FUNCTION_SET_ANALOG_VALUE_CALLBACK_PERIOD 7
#define FUNCTION_GET_ANALOG_VALUE_CALLBACK_PERIOD 8
#define FUNCTION_SET_POSITION_CALLBACK_THRESHOLD 9
#define FUNCTION_GET_POSITION_CALLBACK_THRESHOLD 10
#define FUNCTION_SET_ANALOG_VALUE_CALLBACK_THRESHOLD 11
#define FUNCTION_GET_ANALOG_VALUE_CALLBACK_THRESHOLD 12
#define FUNCTION_SET_DEBOUNCE_PERIOD 13
#define FUNCTION_GET_DEBOUNCE_PERIOD 14


typedef void (*position_func_t)(int16_t, int16_t);

typedef void (*analog_value_func_t)(uint16_t, uint16_t);

typedef void (*position_reached_func_t)(int16_t, int16_t);

typedef void (*analog_value_reached_func_t)(uint16_t, uint16_t);

typedef void (*pressed_func_t)();

typedef void (*released_func_t)();

#if defined _MSC_VER || defined __BORLANDC__
	#pragma pack(push)
	#pragma pack(1)
	#define ATTRIBUTE_PACKED
#elif defined __GNUC__
	#define ATTRIBUTE_PACKED __attribute__((packed))
#else
	#error unknown compiler, do not know how to enable struct packing
#endif

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED GetPosition_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	int16_t x;
	int16_t y;
} ATTRIBUTE_PACKED GetPositionReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED IsPressed_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	bool pressed;
} ATTRIBUTE_PACKED IsPressedReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED GetAnalogValue_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint16_t x;
	uint16_t y;
} ATTRIBUTE_PACKED GetAnalogValueReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED Calibrate_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint32_t period;
} ATTRIBUTE_PACKED SetPositionCallbackPeriod_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED GetPositionCallbackPeriod_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint32_t period;
} ATTRIBUTE_PACKED GetPositionCallbackPeriodReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint32_t period;
} ATTRIBUTE_PACKED SetAnalogValueCallbackPeriod_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED GetAnalogValueCallbackPeriod_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint32_t period;
} ATTRIBUTE_PACKED GetAnalogValueCallbackPeriodReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	char option;
	int16_t min_x;
	int16_t max_x;
	int16_t min_y;
	int16_t max_y;
} ATTRIBUTE_PACKED SetPositionCallbackThreshold_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED GetPositionCallbackThreshold_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	char option;
	int16_t min_x;
	int16_t max_x;
	int16_t min_y;
	int16_t max_y;
} ATTRIBUTE_PACKED GetPositionCallbackThresholdReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	char option;
	uint16_t min_x;
	uint16_t max_x;
	uint16_t min_y;
	uint16_t max_y;
} ATTRIBUTE_PACKED SetAnalogValueCallbackThreshold_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED GetAnalogValueCallbackThreshold_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	char option;
	uint16_t min_x;
	uint16_t max_x;
	uint16_t min_y;
	uint16_t max_y;
} ATTRIBUTE_PACKED GetAnalogValueCallbackThresholdReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint32_t debounce;
} ATTRIBUTE_PACKED SetDebouncePeriod_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED GetDebouncePeriod_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint32_t debounce;
} ATTRIBUTE_PACKED GetDebouncePeriodReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	int16_t x;
	int16_t y;
} ATTRIBUTE_PACKED PositionCallback_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint16_t x;
	uint16_t y;
} ATTRIBUTE_PACKED AnalogValueCallback_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	int16_t x;
	int16_t y;
} ATTRIBUTE_PACKED PositionReachedCallback_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint16_t x;
	uint16_t y;
} ATTRIBUTE_PACKED AnalogValueReachedCallback_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED PressedCallback_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED ReleasedCallback_;

#if defined _MSC_VER || defined __BORLANDC__
	#pragma pack(pop)
#endif
#undef ATTRIBUTE_PACKED

int joystick_get_position(Joystick *joystick, int16_t *ret_x, int16_t *ret_y) {
	if(joystick->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_mutex_lock(&joystick->write_mutex);

	joystick->response.function_id = FUNCTION_GET_POSITION;
	joystick->response.length = sizeof(GetPositionReturn_);
	GetPosition_ gp;
	gp.stack_id = joystick->stack_id;
	gp.function_id = FUNCTION_GET_POSITION;
	gp.length = ipcon_leconvert_uint16_to(sizeof(GetPosition_));

	ipcon_device_write(joystick, (char *)&gp, sizeof(GetPosition_));

	if(ipcon_device_expect_response(joystick) != 0) {
		ipcon_mutex_unlock(&joystick->write_mutex);
		return E_TIMEOUT;
	}

	GetPositionReturn_ *gpr = (GetPositionReturn_ *)joystick->response.buffer;
	*ret_x = ipcon_leconvert_int16_from(gpr->x);
	*ret_y = ipcon_leconvert_int16_from(gpr->y);

	ipcon_mutex_unlock(&joystick->write_mutex);

	return E_OK;
}

int joystick_is_pressed(Joystick *joystick, bool *ret_pressed) {
	if(joystick->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_mutex_lock(&joystick->write_mutex);

	joystick->response.function_id = FUNCTION_IS_PRESSED;
	joystick->response.length = sizeof(IsPressedReturn_);
	IsPressed_ ip;
	ip.stack_id = joystick->stack_id;
	ip.function_id = FUNCTION_IS_PRESSED;
	ip.length = ipcon_leconvert_uint16_to(sizeof(IsPressed_));

	ipcon_device_write(joystick, (char *)&ip, sizeof(IsPressed_));

	if(ipcon_device_expect_response(joystick) != 0) {
		ipcon_mutex_unlock(&joystick->write_mutex);
		return E_TIMEOUT;
	}

	IsPressedReturn_ *ipr = (IsPressedReturn_ *)joystick->response.buffer;
	*ret_pressed = ipr->pressed;

	ipcon_mutex_unlock(&joystick->write_mutex);

	return E_OK;
}

int joystick_get_analog_value(Joystick *joystick, uint16_t *ret_x, uint16_t *ret_y) {
	if(joystick->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_mutex_lock(&joystick->write_mutex);

	joystick->response.function_id = FUNCTION_GET_ANALOG_VALUE;
	joystick->response.length = sizeof(GetAnalogValueReturn_);
	GetAnalogValue_ gav;
	gav.stack_id = joystick->stack_id;
	gav.function_id = FUNCTION_GET_ANALOG_VALUE;
	gav.length = ipcon_leconvert_uint16_to(sizeof(GetAnalogValue_));

	ipcon_device_write(joystick, (char *)&gav, sizeof(GetAnalogValue_));

	if(ipcon_device_expect_response(joystick) != 0) {
		ipcon_mutex_unlock(&joystick->write_mutex);
		return E_TIMEOUT;
	}

	GetAnalogValueReturn_ *gavr = (GetAnalogValueReturn_ *)joystick->response.buffer;
	*ret_x = ipcon_leconvert_uint16_from(gavr->x);
	*ret_y = ipcon_leconvert_uint16_from(gavr->y);

	ipcon_mutex_unlock(&joystick->write_mutex);

	return E_OK;
}

int joystick_calibrate(Joystick *joystick) {
	if(joystick->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_mutex_lock(&joystick->write_mutex);

	Calibrate_ c;
	c.stack_id = joystick->stack_id;
	c.function_id = FUNCTION_CALIBRATE;
	c.length = ipcon_leconvert_uint16_to(sizeof(Calibrate_));

	ipcon_device_write(joystick, (char *)&c, sizeof(Calibrate_));

	ipcon_mutex_unlock(&joystick->write_mutex);

	return E_OK;
}

int joystick_set_position_callback_period(Joystick *joystick, uint32_t period) {
	if(joystick->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_mutex_lock(&joystick->write_mutex);

	SetPositionCallbackPeriod_ spcp;
	spcp.stack_id = joystick->stack_id;
	spcp.function_id = FUNCTION_SET_POSITION_CALLBACK_PERIOD;
	spcp.length = ipcon_leconvert_uint16_to(sizeof(SetPositionCallbackPeriod_));
	spcp.period = ipcon_leconvert_uint32_to(period);

	ipcon_device_write(joystick, (char *)&spcp, sizeof(SetPositionCallbackPeriod_));

	ipcon_mutex_unlock(&joystick->write_mutex);

	return E_OK;
}

int joystick_get_position_callback_period(Joystick *joystick, uint32_t *ret_period) {
	if(joystick->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_mutex_lock(&joystick->write_mutex);

	joystick->response.function_id = FUNCTION_GET_POSITION_CALLBACK_PERIOD;
	joystick->response.length = sizeof(GetPositionCallbackPeriodReturn_);
	GetPositionCallbackPeriod_ gpcp;
	gpcp.stack_id = joystick->stack_id;
	gpcp.function_id = FUNCTION_GET_POSITION_CALLBACK_PERIOD;
	gpcp.length = ipcon_leconvert_uint16_to(sizeof(GetPositionCallbackPeriod_));

	ipcon_device_write(joystick, (char *)&gpcp, sizeof(GetPositionCallbackPeriod_));

	if(ipcon_device_expect_response(joystick) != 0) {
		ipcon_mutex_unlock(&joystick->write_mutex);
		return E_TIMEOUT;
	}

	GetPositionCallbackPeriodReturn_ *gpcpr = (GetPositionCallbackPeriodReturn_ *)joystick->response.buffer;
	*ret_period = ipcon_leconvert_uint32_from(gpcpr->period);

	ipcon_mutex_unlock(&joystick->write_mutex);

	return E_OK;
}

int joystick_set_analog_value_callback_period(Joystick *joystick, uint32_t period) {
	if(joystick->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_mutex_lock(&joystick->write_mutex);

	SetAnalogValueCallbackPeriod_ savcp;
	savcp.stack_id = joystick->stack_id;
	savcp.function_id = FUNCTION_SET_ANALOG_VALUE_CALLBACK_PERIOD;
	savcp.length = ipcon_leconvert_uint16_to(sizeof(SetAnalogValueCallbackPeriod_));
	savcp.period = ipcon_leconvert_uint32_to(period);

	ipcon_device_write(joystick, (char *)&savcp, sizeof(SetAnalogValueCallbackPeriod_));

	ipcon_mutex_unlock(&joystick->write_mutex);

	return E_OK;
}

int joystick_get_analog_value_callback_period(Joystick *joystick, uint32_t *ret_period) {
	if(joystick->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_mutex_lock(&joystick->write_mutex);

	joystick->response.function_id = FUNCTION_GET_ANALOG_VALUE_CALLBACK_PERIOD;
	joystick->response.length = sizeof(GetAnalogValueCallbackPeriodReturn_);
	GetAnalogValueCallbackPeriod_ gavcp;
	gavcp.stack_id = joystick->stack_id;
	gavcp.function_id = FUNCTION_GET_ANALOG_VALUE_CALLBACK_PERIOD;
	gavcp.length = ipcon_leconvert_uint16_to(sizeof(GetAnalogValueCallbackPeriod_));

	ipcon_device_write(joystick, (char *)&gavcp, sizeof(GetAnalogValueCallbackPeriod_));

	if(ipcon_device_expect_response(joystick) != 0) {
		ipcon_mutex_unlock(&joystick->write_mutex);
		return E_TIMEOUT;
	}

	GetAnalogValueCallbackPeriodReturn_ *gavcpr = (GetAnalogValueCallbackPeriodReturn_ *)joystick->response.buffer;
	*ret_period = ipcon_leconvert_uint32_from(gavcpr->period);

	ipcon_mutex_unlock(&joystick->write_mutex);

	return E_OK;
}

int joystick_set_position_callback_threshold(Joystick *joystick, char option, int16_t min_x, int16_t max_x, int16_t min_y, int16_t max_y) {
	if(joystick->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_mutex_lock(&joystick->write_mutex);

	SetPositionCallbackThreshold_ spct;
	spct.stack_id = joystick->stack_id;
	spct.function_id = FUNCTION_SET_POSITION_CALLBACK_THRESHOLD;
	spct.length = ipcon_leconvert_uint16_to(sizeof(SetPositionCallbackThreshold_));
	spct.option = option;
	spct.min_x = ipcon_leconvert_int16_to(min_x);
	spct.max_x = ipcon_leconvert_int16_to(max_x);
	spct.min_y = ipcon_leconvert_int16_to(min_y);
	spct.max_y = ipcon_leconvert_int16_to(max_y);

	ipcon_device_write(joystick, (char *)&spct, sizeof(SetPositionCallbackThreshold_));

	ipcon_mutex_unlock(&joystick->write_mutex);

	return E_OK;
}

int joystick_get_position_callback_threshold(Joystick *joystick, char *ret_option, int16_t *ret_min_x, int16_t *ret_max_x, int16_t *ret_min_y, int16_t *ret_max_y) {
	if(joystick->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_mutex_lock(&joystick->write_mutex);

	joystick->response.function_id = FUNCTION_GET_POSITION_CALLBACK_THRESHOLD;
	joystick->response.length = sizeof(GetPositionCallbackThresholdReturn_);
	GetPositionCallbackThreshold_ gpct;
	gpct.stack_id = joystick->stack_id;
	gpct.function_id = FUNCTION_GET_POSITION_CALLBACK_THRESHOLD;
	gpct.length = ipcon_leconvert_uint16_to(sizeof(GetPositionCallbackThreshold_));

	ipcon_device_write(joystick, (char *)&gpct, sizeof(GetPositionCallbackThreshold_));

	if(ipcon_device_expect_response(joystick) != 0) {
		ipcon_mutex_unlock(&joystick->write_mutex);
		return E_TIMEOUT;
	}

	GetPositionCallbackThresholdReturn_ *gpctr = (GetPositionCallbackThresholdReturn_ *)joystick->response.buffer;
	*ret_option = gpctr->option;
	*ret_min_x = ipcon_leconvert_int16_from(gpctr->min_x);
	*ret_max_x = ipcon_leconvert_int16_from(gpctr->max_x);
	*ret_min_y = ipcon_leconvert_int16_from(gpctr->min_y);
	*ret_max_y = ipcon_leconvert_int16_from(gpctr->max_y);

	ipcon_mutex_unlock(&joystick->write_mutex);

	return E_OK;
}

int joystick_set_analog_value_callback_threshold(Joystick *joystick, char option, uint16_t min_x, uint16_t max_x, uint16_t min_y, uint16_t max_y) {
	if(joystick->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_mutex_lock(&joystick->write_mutex);

	SetAnalogValueCallbackThreshold_ savct;
	savct.stack_id = joystick->stack_id;
	savct.function_id = FUNCTION_SET_ANALOG_VALUE_CALLBACK_THRESHOLD;
	savct.length = ipcon_leconvert_uint16_to(sizeof(SetAnalogValueCallbackThreshold_));
	savct.option = option;
	savct.min_x = ipcon_leconvert_uint16_to(min_x);
	savct.max_x = ipcon_leconvert_uint16_to(max_x);
	savct.min_y = ipcon_leconvert_uint16_to(min_y);
	savct.max_y = ipcon_leconvert_uint16_to(max_y);

	ipcon_device_write(joystick, (char *)&savct, sizeof(SetAnalogValueCallbackThreshold_));

	ipcon_mutex_unlock(&joystick->write_mutex);

	return E_OK;
}

int joystick_get_analog_value_callback_threshold(Joystick *joystick, char *ret_option, uint16_t *ret_min_x, uint16_t *ret_max_x, uint16_t *ret_min_y, uint16_t *ret_max_y) {
	if(joystick->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_mutex_lock(&joystick->write_mutex);

	joystick->response.function_id = FUNCTION_GET_ANALOG_VALUE_CALLBACK_THRESHOLD;
	joystick->response.length = sizeof(GetAnalogValueCallbackThresholdReturn_);
	GetAnalogValueCallbackThreshold_ gavct;
	gavct.stack_id = joystick->stack_id;
	gavct.function_id = FUNCTION_GET_ANALOG_VALUE_CALLBACK_THRESHOLD;
	gavct.length = ipcon_leconvert_uint16_to(sizeof(GetAnalogValueCallbackThreshold_));

	ipcon_device_write(joystick, (char *)&gavct, sizeof(GetAnalogValueCallbackThreshold_));

	if(ipcon_device_expect_response(joystick) != 0) {
		ipcon_mutex_unlock(&joystick->write_mutex);
		return E_TIMEOUT;
	}

	GetAnalogValueCallbackThresholdReturn_ *gavctr = (GetAnalogValueCallbackThresholdReturn_ *)joystick->response.buffer;
	*ret_option = gavctr->option;
	*ret_min_x = ipcon_leconvert_uint16_from(gavctr->min_x);
	*ret_max_x = ipcon_leconvert_uint16_from(gavctr->max_x);
	*ret_min_y = ipcon_leconvert_uint16_from(gavctr->min_y);
	*ret_max_y = ipcon_leconvert_uint16_from(gavctr->max_y);

	ipcon_mutex_unlock(&joystick->write_mutex);

	return E_OK;
}

int joystick_set_debounce_period(Joystick *joystick, uint32_t debounce) {
	if(joystick->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_mutex_lock(&joystick->write_mutex);

	SetDebouncePeriod_ sdp;
	sdp.stack_id = joystick->stack_id;
	sdp.function_id = FUNCTION_SET_DEBOUNCE_PERIOD;
	sdp.length = ipcon_leconvert_uint16_to(sizeof(SetDebouncePeriod_));
	sdp.debounce = ipcon_leconvert_uint32_to(debounce);

	ipcon_device_write(joystick, (char *)&sdp, sizeof(SetDebouncePeriod_));

	ipcon_mutex_unlock(&joystick->write_mutex);

	return E_OK;
}

int joystick_get_debounce_period(Joystick *joystick, uint32_t *ret_debounce) {
	if(joystick->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_mutex_lock(&joystick->write_mutex);

	joystick->response.function_id = FUNCTION_GET_DEBOUNCE_PERIOD;
	joystick->response.length = sizeof(GetDebouncePeriodReturn_);
	GetDebouncePeriod_ gdp;
	gdp.stack_id = joystick->stack_id;
	gdp.function_id = FUNCTION_GET_DEBOUNCE_PERIOD;
	gdp.length = ipcon_leconvert_uint16_to(sizeof(GetDebouncePeriod_));

	ipcon_device_write(joystick, (char *)&gdp, sizeof(GetDebouncePeriod_));

	if(ipcon_device_expect_response(joystick) != 0) {
		ipcon_mutex_unlock(&joystick->write_mutex);
		return E_TIMEOUT;
	}

	GetDebouncePeriodReturn_ *gdpr = (GetDebouncePeriodReturn_ *)joystick->response.buffer;
	*ret_debounce = ipcon_leconvert_uint32_from(gdpr->debounce);

	ipcon_mutex_unlock(&joystick->write_mutex);

	return E_OK;
}

int joystick_get_version(Joystick *joystick, char ret_name[40], uint8_t ret_firmware_version[3], uint8_t ret_binding_version[3]) {
	strncpy(ret_name, joystick->name, 40);

	ret_firmware_version[0] = joystick->firmware_version[0];
	ret_firmware_version[1] = joystick->firmware_version[1];
	ret_firmware_version[2] = joystick->firmware_version[2];

	ret_binding_version[0] = joystick->binding_version[0];
	ret_binding_version[1] = joystick->binding_version[1];
	ret_binding_version[2] = joystick->binding_version[2];

	return E_OK;
}

static int joystick_callback_wrapper_position(Joystick *joystick, const unsigned char *buffer) {
	PositionCallback_ *pc = (PositionCallback_ *)buffer;
	pc->x = ipcon_leconvert_int16_from(pc->x);
	pc->y = ipcon_leconvert_int16_from(pc->y);
	((position_func_t)joystick->registered_callbacks[pc->function_id])(pc->x, pc->y);
	return sizeof(PositionCallback_);
}

static int joystick_callback_wrapper_analog_value(Joystick *joystick, const unsigned char *buffer) {
	AnalogValueCallback_ *avc = (AnalogValueCallback_ *)buffer;
	avc->x = ipcon_leconvert_uint16_from(avc->x);
	avc->y = ipcon_leconvert_uint16_from(avc->y);
	((analog_value_func_t)joystick->registered_callbacks[avc->function_id])(avc->x, avc->y);
	return sizeof(AnalogValueCallback_);
}

static int joystick_callback_wrapper_position_reached(Joystick *joystick, const unsigned char *buffer) {
	PositionReachedCallback_ *prc = (PositionReachedCallback_ *)buffer;
	prc->x = ipcon_leconvert_int16_from(prc->x);
	prc->y = ipcon_leconvert_int16_from(prc->y);
	((position_reached_func_t)joystick->registered_callbacks[prc->function_id])(prc->x, prc->y);
	return sizeof(PositionReachedCallback_);
}

static int joystick_callback_wrapper_analog_value_reached(Joystick *joystick, const unsigned char *buffer) {
	AnalogValueReachedCallback_ *avrc = (AnalogValueReachedCallback_ *)buffer;
	avrc->x = ipcon_leconvert_uint16_from(avrc->x);
	avrc->y = ipcon_leconvert_uint16_from(avrc->y);
	((analog_value_reached_func_t)joystick->registered_callbacks[avrc->function_id])(avrc->x, avrc->y);
	return sizeof(AnalogValueReachedCallback_);
}

static int joystick_callback_wrapper_pressed(Joystick *joystick, const unsigned char *buffer) {
	PressedCallback_ *pc = (PressedCallback_ *)buffer;

	((pressed_func_t)joystick->registered_callbacks[pc->function_id])();
	return sizeof(PressedCallback_);
}

static int joystick_callback_wrapper_released(Joystick *joystick, const unsigned char *buffer) {
	ReleasedCallback_ *rc = (ReleasedCallback_ *)buffer;

	((released_func_t)joystick->registered_callbacks[rc->function_id])();
	return sizeof(ReleasedCallback_);
}

void joystick_register_callback(Joystick *joystick, uint8_t id, void *callback) {
	joystick->registered_callbacks[id] = callback;
}

void joystick_create(Joystick *joystick, const char *uid) {
	ipcon_device_create(joystick, uid);

	joystick->expected_name = "Joystick Bricklet";

	joystick->binding_version[0] = 1;
	joystick->binding_version[1] = 0;
	joystick->binding_version[2] = 0;

	joystick->callback_wrappers[JOYSTICK_CALLBACK_POSITION] = joystick_callback_wrapper_position;
	joystick->callback_wrappers[JOYSTICK_CALLBACK_ANALOG_VALUE] = joystick_callback_wrapper_analog_value;
	joystick->callback_wrappers[JOYSTICK_CALLBACK_POSITION_REACHED] = joystick_callback_wrapper_position_reached;
	joystick->callback_wrappers[JOYSTICK_CALLBACK_ANALOG_VALUE_REACHED] = joystick_callback_wrapper_analog_value_reached;
	joystick->callback_wrappers[JOYSTICK_CALLBACK_PRESSED] = joystick_callback_wrapper_pressed;
	joystick->callback_wrappers[JOYSTICK_CALLBACK_RELEASED] = joystick_callback_wrapper_released;
}
